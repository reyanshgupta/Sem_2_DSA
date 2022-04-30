    #include<iostream>
    using namespace std;

    int main(){
        int rank;
        cout << "Enter Rank: ";
        cin >> rank;
        if (rank > 100)
        cout << "0 ";
        else if (rank > 0 && rank < 51)
        cout << "100 ";
        else if (rank > 50 && rank < 101)
        cout << "50 ";
        else
        cout << "Wrong Input. ";

        return 0;
    }
