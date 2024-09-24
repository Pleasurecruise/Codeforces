#include <iostream>
#include <vector>

int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        int sum = 0;
        for(int i = 0; i < n; i+=2){
            sum += a[i];
        }
        for(int i = 1; i < n; i+=2){
            sum -= a[i];
        }
        std::cout << sum << std::endl;
    }
}