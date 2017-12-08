# README file for TEAM[3,2]:

This text file describes brief but precise and complete specification of project including:
- function descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.


# ROTATION3-2

## function descriptions
 ```
1.trivial
 input parameters: char str[],int n, int d
 output parameter: char *
 file name: trivial.cpp
 ownership: 조중현

2.juggling
 input parameters: char str[],int n, int d
 output parameter: char *
 file name: juggle.cpp
 ownership: 박진영

3.blockswap
 input parameters: char str[],int n, int d
 output parameter: char *
 file name: blockswap.cpp
 ownership: 강영빈

4.reverse
 input parameters: char str[],int n, int d
 output parameter: char *
 file name: Reverse.cpp
 ownership: 김성윤
```

## trivial-조중현
#### d > 0 일때는 시계 방향, d < 0 일때는 반시계 방향으로 rotate.
#### 문자를 옮길때는 temp 변수를 하나 선언 후 그것을 이용해서 한칸씩 차례로 rotate.
## juggling-박진영
#### d > 0 일때는 시계 방향, d < 0 일때는 반시계 방향으로 rotate.
#### 최대공약수를 찾는 함수를 사용해 n과 d의 최대공약수를 찾고, 그 값 만큼 rotate를 반복.
## blockswap-강영빈
#### 문자열을 두 부분으로 나눈 후 앞, 뒤의 문자열의 길이에 따라 두 문자열을 swap하는 과정을 재귀적으로 반복.
## reverse-김성윤
#### 문자열을 두 부분으로 나눈 후 앞, 뒤, 문자열 전체를 reverse하며 문자열 전체를 rotate.
## Main-강영빈
#### 난수 생성을 이용해 문자열과 n, d값을 설정하고 4가지 함수를 이용해 문자열을 rotate하는데 소요되는 시간을 측정.
## README-김성윤
* * * * * * * * * 
## 실험결과
STRLength|ROTATEdistance |T.trivial|J.juggle|T.bw	|T.reverse
---|---|---|---|---|---
 517833|13896|19.255|0.002|0.001|0.002
 209594|-29003|15.817|0.001|0.000|0.001
 10011101|-3784|97.156|0.228|0.027|0.034
 7029470|-10141|182.625|0.152|0.021|0.030
---------------------------------------------------------------------

## 추론
#### 위 실험결과를 참고하면 문자열을 rotate하는데 소요 시간은 trivial>juggling>reverse>blockswap 순이였다.
#### trivial함수의 경우 각각의 문자를 한개씩 총 n의 d배만큼 이동시켜 계산량이 n * |d| 이므로 가장 시간이 오래 걸리는것으로 추정된다.
#### 그 이외 3개의 함수의 경우 trivial함수에 비해 압도적으로 짧은 시간이 걸렸다.
#### juggling함수의 경우 GCD만큼의 문자를 세트로 묶어 이동시키는 방식이므로 GCD가 1일때는 시간이 오래걸리지만
#### GCD가 d에 가까워질수록 빠르게 rotate 할 수 있으면 GCD가 d라면 단 n번의 이동만으로 rotate가 가능하다.
#### reverse함수의 경우 총 3번의 문자열을 뒤집는 과정을 통해 (d/2)+((n-d)/2)+(n/2), 즉 총 n번의 연산만으로 rotate가 가능하다.
#### blockswap함수의 경우 문자열을 앞, 뒤로 나눠 문자열의 길이가 같을때 까지 swap과정을 재귀적으로 반복하므로 n번의 연산만으로 rotate가 가능하다.
#### 즉 trivial을 제외한 세 함수는 계산량이 n이므로 압도적으로 짧은 시간이 걸리는 것으로 추정된다.
* * *
