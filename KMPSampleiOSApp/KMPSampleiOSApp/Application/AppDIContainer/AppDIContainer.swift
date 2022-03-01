import CommonDomain
import CommonData

public let diContainer = AppDIContainer()
public let mainScope = MainScope()
public let backgroundScope = BackgroundScope()

public let coroutineContextProvider = IosDispatchersCoroutineContextProvider(
    main: mainScope.coroutineContext,
    io: backgroundScope.coroutineContext
)

public class AppDIContainer {
    public lazy var useCaseExecutor: UseCaseExecutor = {
        .init(coroutineScope: useCase.mainScope)
    }()

    public lazy var useCase = {
        UseCaseProvider()
    }()
}
