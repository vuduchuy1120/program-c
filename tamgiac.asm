include\masm32\include\masm32rt.inc

.data
y dd 0
.code

    tohop proc a:DWORD ,b:DWORD
        LOCAL ketqua1 :DWORD
        LOCAl m:DWORD
        LOCAL hieu:DWORD
        LOCAL check:DWORD
        mov ketqua1,1
        
        mov ebx,a
        sub ebx,b
        mov check, ebx
        mov ebx, check
        cmp ebx, b
        jl gan
        jge vonglap
        gan:
            mov b, ebx
            jmp vonglap
        vonglap:
            mov m, 0
            mov ebx,m
            cmp ebx,b
            jl tinh
            jge inra
            tinh:
                mov ecx,a
                sub ecx,m
                mov hieu,ecx
                mov ecx, ketqua1
                mul hieu
                mov ketqua1,eax
                print str$(ketqua1)
                print chr$(13,10)
                inc m
                mov ebx,ketqua1
                div m
                mov ketqua1,ebx
                jmp vonglap
             inra:
                print str$(ketqua1)
                print chr$(" ")
    
    ret
    tohop endp


    vehinh1 proc n: DWORD

        LOCAL i : DWORD
        LOCAL j : DWORD
        mov i,1
        mov j, 1
        laplai:
            mov eax,i
            cmp eax,n
            jle vehang
            jg thoat
            vehang: 
                mov ebx ,j
                cmp ebx, i
                jl vecot
                je vexuongdong
                jg laplai

                vecot:
                    invoke tohop,i,j
                    inc j
                    jmp vehang
                vexuongdong:
                    invoke tohop,i,j
                    print chr$(13,10)
                    mov j,1
                    inc i
                    jmp laplai
                thoat:             
    ret
    vehinh1 endp
start:
    invoke tohop,5,2
exit
end start
