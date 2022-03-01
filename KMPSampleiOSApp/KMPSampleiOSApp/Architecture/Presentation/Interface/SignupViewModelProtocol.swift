protocol SignupViewModelProtocol {
    var showLoader: Bindable<Bool> { get }
    var showErrorMessage: Bindable<String?> { get }
    var onSuccess: Bindable<Bool> { get }

    func submit(name: String, email: String, password: String, phone: String)
}
