import Foundation
import UIKit

public protocol Coordinator: AnyObject {
    var navigationController: CoordinatedNavigationController { get }
    var childCoordinators: [Coordinator] { get }
    var parentCoordinator: Coordinator? { get set }

    func start()
    func addChild(_ child: Coordinator)
    func removeChild(_ child: Coordinator)
    func removeAllChilds()
}

class BaseCoordinator: Coordinator {
    public var navigationController: CoordinatedNavigationController
    public var childCoordinators: [Coordinator] = []
    public var parentCoordinator: Coordinator?

    init(navigationController: CoordinatedNavigationController) {
        self.navigationController = navigationController
        navigationController.onPopController = { [weak self] in
            guard let self = self else { return }
            self.parentCoordinator?.removeChild(self)
        }
    
        navigationController.onPopToRootController = { [weak self] in
            guard let self = self else { return }
            self.parentCoordinator?.removeAllChilds()
        }
    }

    public func addChild(_ child: Coordinator) {
        childCoordinators.append(child)
        child.parentCoordinator = self
        child.start()
    }

    public func removeChild(_ child: Coordinator) {
        childCoordinators = childCoordinators.filter { $0 !== child }
    }

    func removeAllChilds() {
        if childCoordinators.count > 0 {
            childCoordinators = [childCoordinators[0]]
        }
    }

    open func start() {
        fatalError("Needs to be implemented in the subclass")
    }

    deinit {
        print("👉 Deinit \(type(of: self))")
    }
}
