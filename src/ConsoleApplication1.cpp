/*
* //////////////////////////// Задание 3:
*/

#include <iostream>
#include "Constants.h"

using namespace std;

static double calculateHeight(double initialHeight, double seconds) {

    double height = initialHeight - (myConstants::GRAVITY * seconds * seconds) / 2;

    return height < 0 ? 0 : height;
}

int main() {

    setlocale(LC_ALL, "Russian");

    double initialHeight;

    cout << "Введите высоту Башни в метрах: ";
    cin >> initialHeight;

    if (initialHeight < 0) {
        cout << "Высота не может принимать Отрицательные значения!" << endl;
        return 1;
    }

    double height;
    int seconds = 0;

    do {
        height = calculateHeight(initialHeight, seconds);
        if (height > 0) {
            cout << "Через " << seconds << " секунд, Мяч окажется на высоте: " << height << " метров!" << endl;
        }
        else {
            cout << "Через " << seconds << " секунд, Мяч оказался на земле!" << endl;
        }
        seconds++;
    } while (height > 0);

    return 0;
}

/*
* //////////////////////////// Задание 1:
* 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void PrintWorryCount(const vector<bool>& is_nervous) {
	cout << count(is_nervous.begin(), is_nervous.end(), true);
}
int main() {
	PrintWorryCount({ true, true, false, true });
	return 0;
}

*/



/*
* //////////////////////////// Задание 2:
* 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool startsWithA(const string& str) {
	return !str.empty() && (str[0] == 'A' || str[0] == 'a');
}

int CountStartsWithA(const vector<string>& xs) {
	// посчитайте число строк, начинающихся на букву A
	return count_if(xs.begin(), xs.end(), startsWithA);
}
int main() {
	// не меняйте тело main
	cout << CountStartsWithA({ "And"s, "another"s, "one"s, "gone"s, "another"s, "one"s
	"bites"s, "the"s, "dust"s });
	return 0;
}
*/