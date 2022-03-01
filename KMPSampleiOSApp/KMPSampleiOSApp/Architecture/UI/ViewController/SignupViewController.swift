import UIKit

class SignupViewController: UIViewController {
    @IBOutlet private weak var fullNameTextField: UITextField!
    @IBOutlet private weak var emailTextField: UITextField!
    @IBOutlet private weak var passwordTextField: UITextField!
    @IBOutlet private weak var phoneNumberTextField: UITextField!
    @IBOutlet private weak var activityIndicator: UIActivityIndicatorView!
    @IBOutlet weak var loaderView: UIView!
    
    var viewModel: SignupViewModelProtocol!

    override func viewDidLoad() {
        super.viewDidLoad()
        bindViewModel()
    }

    private func bindViewModel() {
        viewModel.showLoader.bind { [weak self] status in
            if status {
                self?.loaderView.isHidden = false
                self?.activityIndicator.startAnimating()
            } else {
                self?.loaderView.isHidden = true
                self?.activityIndicator.stopAnimating()
            }
        }

        viewModel.onSuccess.bind { success in
            guard success else { return }
        }

        viewModel.showErrorMessage.bind { [weak self] message in
            guard let message = message else { return }
            self?.showAlert(with: message)
        }
    }

    @IBAction private func submitTapAction(_ sender: Any) {
        viewModel.submit(
            name: fullNameTextField.trimText,
            email: emailTextField.trimText,
            password: passwordTextField.trimText,
            phone: phoneNumberTextField.trimText
        )
    }
}

extension SignupViewController: UITextFieldDelegate {
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        switch textField {
        case fullNameTextField:
            emailTextField.becomeFirstResponder()
        case emailTextField:
            passwordTextField.becomeFirstResponder()
        case passwordTextField:
            phoneNumberTextField.becomeFirstResponder()
        default:
            textField.resignFirstResponder()
        }
        return true
    }
}
