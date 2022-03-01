import UIKit

@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    var window: UIWindow?

    private lazy var navigationController: CoordinatedNavigationController = {
        let navigation = CoordinatedNavigationController()
        navigation.setNavigationBarHidden(true, animated: false)
        return navigation
    }()

    private lazy var appCoordinator: AppCoordinator = {
        let coordinator = AppCoordinator(navigationController: navigationController)
        return coordinator
    }()

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        appCoordinator.start()
        window = UIWindow()
        window?.rootViewController = navigationController
        window?.makeKeyAndVisible()
        return true
    }
}
