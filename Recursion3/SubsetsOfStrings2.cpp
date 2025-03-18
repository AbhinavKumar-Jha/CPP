// This is more effiecient method to find the Subset of Strings
#include<iostream>
#include<string>
using namespace std;
void printSubset(string ans, string original, int idx) {
    if (idx == original.length()) {
        cout<<ans<<endl;
        return;
    }
    printSubset(ans + original[idx], original, idx + 1);
    printSubset(ans, original, idx + 1);
}
int main() {
    string str = "abc";
    printSubset("", str, 0);
    return 0;
}
