import CommonDomain

class SignupViewModel: SignupViewModelProtocol {
    var showLoader: Bindable<Bool> = Bindable(false)
    var showErrorMessage: Bindable<String?> = Bindable(nil)
    var onSuccess: Bindable<Bool> = Bindable(false)

    private var userCaseExecutor: UseCaseExecutor
    private var registerUserUseCase: RegisterUserUseCase
    
    init(userCaseExecutor: UseCaseExecutor, registerUserUseCase: RegisterUserUseCase) {
        self.userCaseExecutor = userCaseExecutor
        self.registerUserUseCase = registerUserUseCase
    }
    
    func submit(name: String, email: String, password: String, phone: String) {
        showLoader.value = true
        userCaseExecutor.execute(
            useCase: registerUserUseCase,
            value: UserRequestModel(
                fullName: name,
                email: email,
                mobile: phone,
                password: password
            )
        ) { [weak self] responseModel in
            self?.showLoader.value = false
            self?.onSuccess.value = true
            print(responseModel ?? "")
        } onError: { [weak self] errorException in
            self?.showLoader.value = false
            print(errorException)
        }
    }
}
