#include <iostream>
#include <vector>
#include <string>

using namespace std;

int step_function(int x)
{
    int result = 0;
    if (x < 0)
    {
        result = -1;
    }
    else if (x > 0)
    {
        result = 1;
    }
    return result;
}

int main()
{
    vector<string> msg{"Hello world! "};
    int my_num;
    int step_val;

    cout << "Please enter an integer value: ";
    cin >> my_num;

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    // call step function
    step_val = step_function(my_num);
    cout << "Step value: " + std::to_string(step_val) << endl;

    // check for even or odd
    if (my_num % 2 == 0)
    {
        cout << "My num is even!" << endl;
    }
    else
    {
        cout << "My num is odd!" << endl;
    }
    cout << "My num: " + std::to_string(my_num) << endl;
}
