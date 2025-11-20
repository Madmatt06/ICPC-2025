#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int m = 0, n = 0, t = 0, temp = 0, amount = 0, largest = 0;
    cin >> m >> n >> t;

    int arr[m];
    vector<int> check, pairs, most;

    for (int i = 0; i < m; i++) {
        cin >> arr[i];
        bool isNotIn = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == check[j]){isNotIn = false;}
        }

        if (isNotIn) check.push_back(arr[i]);
        amount++;
    }

    //make pairs
    for (int i = 0; i < check.size(); i++) {
        for (int j = 0; j < check.size(); j++) {
            if (check[j] =t-check[i]) {pairs.push_back(check[j]);}
        }
    }

    if (pairs.size() == 0) {
        for (int i = 0; i < check.size(); i++) {
            if (check[i] > t) {
                temp = t-check[i];
                break;
            }
        }
    } else if (pairs.size() == 1) {
        temp = t-pairs[0];
    }else {
        for (int i = 0; i < pairs.size(); i++) {
            for (int j = 0; j < amount; i++) {
                if (pairs[i] == arr[j] && most[i] == 0) most[i] = 1;
                else if (pairs[i] == arr[j] && most[i] > 0) most[i]++;
            }

        }

        for (int i = 0; i < pairs.size(); i++) {
            if (largest < most[i]) largest = most[i];
        }



    }





    return 0;
}
