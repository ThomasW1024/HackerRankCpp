/*https://www.hackerrank.com/challenges/c-tutorial-functions/problem*/
#include <iostream>

int max_of_four(int &a, int &b, int &c, int &d){
    int &max = a;
    if (max < b){
        max = b;
    }
    if (max < c){
        max = c;
    }
    if (max < d){
        max = d;
    }
    return max;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >>d;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return EXIT_SUCCESS;
}

