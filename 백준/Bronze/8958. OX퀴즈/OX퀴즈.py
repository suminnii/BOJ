N=int(input())

for _ in range(N):
    case=input()
    s=0
    total=0
    for i in case: #문자열은 range함수로 돌릴 수 없음(그냥 넣어도 됨)
        if i=="O":
            s+=1 #s:O의 개수 누적 증가
            total+=s #total:O가 나올 때마다 s값 더함->O값 나오면 얘까지 계속 실행됨
                     #O 연속 2개->s=1,t=1->s=1+1=2,t=t+s=1+2=3
        else:
            s=0
   
    print(total)
            