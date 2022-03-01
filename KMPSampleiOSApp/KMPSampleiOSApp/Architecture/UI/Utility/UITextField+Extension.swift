import UIKit

extension UITextField {
    var trimText: String {
        return text?.trimmingCharacters(in: CharacterSet.whitespacesAndNewlines) ?? ""
    }
}
