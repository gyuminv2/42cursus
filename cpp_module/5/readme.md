반복 및 예외

stack unwinding: 과정 중 로컬 변수의 destructor을 호출 (heap에 할당하면 leak날 위험있음) -> smart pointer로 해결가능