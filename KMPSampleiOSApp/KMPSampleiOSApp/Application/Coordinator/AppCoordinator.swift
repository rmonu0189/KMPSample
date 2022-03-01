import UIKit

class AppCoordinator: BaseCoordinator {
    override func start() {
        let storyboard = UIStoryboard(name: "Authentication", bundle: nil)
        guard let controller = storyboard.instantiateInitialViewController() as? SignupViewController else { return }
        controller.viewModel = SignupViewModel(
            userCaseExecutor: diContainer.useCaseExecutor,
            registerUserUseCase: diContainer.useCase.registerUseCase
        )
        navigationController.viewControllers = [controller]
    }
}
