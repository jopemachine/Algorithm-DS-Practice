//
// Created by wonma on 2019-06-30.
//

#ifndef ALGORITHM_2193_H
#define ALGORITHM_2193_H

#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

void solve_2193(){
    int N;

    cin >> N;

    long long int* cache = new long long int[N + 1];

    // 1, 2 ��� ��ģ���� 1��
    cache[1] = 1;
    cache[2] = 1;

    for(int i = 3; i <= N; i++){
        cache[i] = cache[i-1] + cache[i-2];
    }

    cout << cache[N];

}

#endif //ALGORITHM_2193_H