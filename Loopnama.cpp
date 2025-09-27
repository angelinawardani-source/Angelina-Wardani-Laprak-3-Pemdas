#include <iostream>
using namespace std;

int main() {
    int n = 7; 

    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) { 
             if (j == 0) cout << "A";
             else if (i == 0 && j > 0 && j < n - 1) 
                cout << "A";
            else if (i == 3 && j > 0 && j < n - 1) 
                cout << "A";
            else if (j == n-1) 
                cout << "A";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) { 
             if (j == 0) cout << "N";
             else if (i == 0 && j > 0 && j < n - 1) 
                cout << "N";
            else if (j == n-1) 
                cout << "N";
            else
                cout << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) { 
             if (j == 0) cout << "G";
             else if (i == 0 && j > 0 && j < n - 1) 
                cout << "G";
            else if (j == n-1 && i > 2) 
                cout << "G";
            else if (j >= n-3 && i == n/2) cout << "G";
            else if (i == n - 1 && j > 0 && j < n - 1)
                cout << "G";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) { 
             if (j == 0) cout << "E";
             else if (i == 0 && j > 0 && j < n - 1) 
                cout << "E";
            else if (i == 3 && j > 0 && j < n - 1) 
                cout << "E";
            else if (i == n - 1 && j > 0 && j < n - 1)
                cout << "E";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) { 
             if (j == 0) cout << "L";
            else if (i == n - 1 && j > 0 && j < n - 1)
                cout << "L";
            else
                cout << " ";
        }
        cout << endl;
    }


    return 0;
}
