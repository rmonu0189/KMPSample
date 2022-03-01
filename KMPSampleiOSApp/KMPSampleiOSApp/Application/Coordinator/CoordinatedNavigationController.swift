import UIKit

open class CoordinatedNavigationController: UINavigationController {
    public var onPopController: (() -> Void)?
    public var onPopToRootController: (() -> Void)?

    open override func viewDidLoad() {
        super.viewDidLoad()
        navigationBar.prefersLargeTitles = false
        setNavigationBarHidden(true, animated: false)
    }

    @discardableResult
    override open func popViewController(animated: Bool) -> UIViewController? {
        onPopController?()
        return super.popViewController(animated: animated)
    }

    @discardableResult
    override open func popToRootViewController(animated: Bool) -> [UIViewController]? {
        onPopToRootController?()
        return super.popToRootViewController(animated: animated)
    }
}
