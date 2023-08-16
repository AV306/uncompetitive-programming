#include <bits/stdc++.h>
using namespace std;

int l;
char x;
stack <char> st;

int main() {
  cin >> l;
  for (int i = 0; i < l; i++) {
    cin >> x;

    if (x == '(') st.push(x);
    else if (st.size() > 0 and st.top() == '(') st.pop();
    else {
    cout << "Invalid!";
    return 0;
    }
  }//UNFINISHED
}
