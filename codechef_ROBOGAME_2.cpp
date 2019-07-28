//AUTHOR      saurabh59373

#include <iostream>
#include <vector>

using namespace std;

vector <int> nums(50, 0);
vector <int> gap(50, 0);

void fillgapArray (string str, vector <int> gap){
    int k = -1;
    int start, finish;
    bool goingSta = false;
    for (int i = 0; i < str.size(); i++){
        if (str[i] != '.' && goingSta == false){
            start = i;
            goingSta = true;
        }

        else if (str[i] != '.' && goingSta == true){
            gap[k] = (i - start - 1);
            k++;
            goingSta = false;
        }
    }
}

void fillNumArray (string str, vector <int> nums){
    int k = -1;
    for (int i = 0; i < str.size(); i++){
        if (str[i] != '.'){
            k++;
            nums[k] = (str[i] - 48);
        }
    }
}
void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0) ; std::cout.tie(0);
}

int main(){
    // fast() ;
    int T;
    cin >> T;

    while (T--){
        string str;
        string status = "safe\n";
        cin >> str;

        fillgapArray(str, gap);
        fillNumArray(str, nums);

        cout << gap.size() << " " << nums.size() << endl;
        for (int i = 0; i < gap.size(); i++){
            cout << gap[i];
        }
        for (int i = 0; i < nums.size(); i++){
            cout << nums[i];
        }

        if (gap.size() < 1){
            cout << status;
        }

        else{
            for (int i = 0; i < gap.size(); i++){
                if (nums[i] + nums[i + 1] > gap[i]){
                        status = "unsafe\n";
                }
            }
            cout << status;
        }
    }

    return 0 ;
}
