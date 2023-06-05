#include <iostream>

using namespace std;

void p1() {
    int cell, isearch, counter = 0, f, l;
    bool enbefore = false;
    cin >> cell >> isearch;

    for (int i = 1; i<=cell; i++) {
        int r;
        cin >> r;

        if (r == isearch && enbefore == false) {
            f = i;
            enbefore = true;
        }
        if (r == isearch) {
            l = i;
            counter++;
        }
    }

    if (enbefore == false) {
        cout << -1 <<endl;
    } else {
        cout << f << " " << l << " " << counter << endl;
    }
}

void p2() {
    int t;
    cin >> t;

    for (int i=1; i<=t; i++) {
        int n;
        cin >> n;

        for (int j=1; j<=n; j++) {
            if (j == n)
                cout << n;
            else
                cout << n << " ";
        }
        cout << endl;
    }
}

// level 0 main sheet 2 pro A
void p3() {
        int n;
    bool in = false;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x == 4 || x == 7) {
            in = true;
        }
    }
    if (in)
        cout << "yes";
    else
        cout << "no";
}

// level 0 main sheet 2 pro c !!!!
void p4() {
        int l,r, counter;
    cin >> l >> r;

    for (int i = 1; i <= (r-l); i++) {

            int numberif;
            for (int j=1; j<=i; j++) {
                if (i%j == 0)
                numberif += j;
            }
            if ( (numberif - i) == i ) {
                counter++;
            }

    }
    cout << counter;
}

// level 0 main sheet 2 pro d
void p5() {
        int n,countS,countA;
    cin >> n;

    for (int i=1; i<=5; i++) {
        int y;
        cin >> y;

        if (y%n == 0)
            countA++;
        else
            countS++;
    }

    if (countA > countS)
        cout << "3abas\n";
    else if (countS > countA)
        cout << "Sultan\n";
    else
        cout << "TIE";

}

// Level 0 -Main Sheet E
void p6() {
        int a,b,x,counter=0;
    cin >> a >> b >> x;


    for (int i=a; i<=b; i++) {
        if (i%x==0) {
            counter++;
        }
    }
    cout << counter << endl;
}

// Level 0 -Main Sheet F
void p7() {
        int n, sumeven=0, sumodd=0;
    cin >> n;

    for (int i =1; i<=n; i++) {
        if (i%2==0)
        sumeven +=i;
    else
        sumodd +=i;
    }

    cout << abs(sumeven - sumodd) << endl;
}

// Level 0 -Main Sheet I
void p8() {
        int n, fac=1;
    cin >> n;
     for (int i=1; i<=n; i++) {
        fac *=i;
     }
     cout << fac%10<< endl;
}

int main(){
}
