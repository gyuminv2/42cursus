Memory allocation, pointers to members, references, switch statement

멤버 이니셜라이저가 반드시 사용되야하는 상황
1. 상수멤버가 있을 때
2. 레퍼런스 멤버가 있을 때
3. 멤버의 생성자를 호출 할 때
4. 상속관계에서 부모의 생성자를 호출 할 때

call-by-reference
1. 주소 값 이용
2. 참조자 이용

릭
leaks -atExit -- ./a.out