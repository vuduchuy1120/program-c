include \masm32\include\masm32rt.inc


.data
x dd 0

.code

TinhTong proc n :DWORD

        LOCAL sum: DWORD
        LOCAL i: DWORD
         
        mov sum,0
        mov i,0
        laplai:
            mov eax,i
            cmp eax, n
            jle tinh
            jg  inra
            
            tinh:
                mov ebx, sum
                add ebx , i
                inc i
                inc i
                mov sum,ebx
                jmp laplai
            inra:
                print str$(sum)
                print chr$(13,10)
ret    

TinhTong endp

    start:
        mov x, sval(input("n = "))
        invoke TinhTong,x

    exit
    
    
    end start