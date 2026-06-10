#include <iostream>
using namespace std;

int main() {
    string red = "\033[31m";   // اللون الأحمر
    string reset = "\033[0m";  // لإرجاع اللون الافتراضي

    int padding = 20; // لتقريب القلب لمنتصف الشاشة (يمكن تعديلها حسب عرض الكونسول)

    cout << "\n";

    cout << string(padding, ' ') << red << "          *****       *****          " << reset << "\n";
    cout << string(padding, ' ') << red << "        *       *   *       *        " << reset << "\n";
    cout << string(padding, ' ') << red << "       *         * *         *       " << reset << "\n";
    cout << string(padding, ' ') << red << "      *           *           *      " << reset << "\n";
    cout << string(padding, ' ') << red << "      *                       *      " << reset << "\n";
    cout << string(padding, ' ') << red << "       *                     *       " << reset << "\n";
    cout << string(padding, ' ') << red << "        *                   *        " << reset << "\n";
    cout << string(padding, ' ') << red << "         *                 *         " << reset << "\n";
    cout << string(padding, ' ') << red << "          *               *          " << reset << "\n";
    cout << string(padding, ' ') << red << "           *             *           " << reset << "\n";
    cout << string(padding, ' ') << red << "            *           *            " << reset << "\n";
    cout << string(padding, ' ') << red << "             *         *             " << reset << "\n";
    cout << string(padding, ' ') << red << "              *       *              " << reset << "\n";
    cout << string(padding, ' ') << red << "               *     *               " << reset << "\n";
    cout << string(padding, ' ') << red << "                *   *                " << reset << "\n";
    cout << string(padding, ' ') << red << "                 * *                 " << reset << "\n";
    cout << string(padding, ' ') << red << "                  *                  " << reset << "\n";

    cout << "\n" << string(padding, ' ') << red << "    سيف     " << reset << "\n\n";

    return 0;
}

