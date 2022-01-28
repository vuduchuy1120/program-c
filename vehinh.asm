include\masm32\include\masm32rt.inc

.data
a dd 0
.code

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
                    print chr$("* ")
                    inc j
                    jmp vehang
                vexuongdong:
                    print chr$("*",13,10)
                    mov j,1
                    inc i
                    jmp laplai
                thoat:             
    ret
    vehinh1 endp

    vehinh2 proc n:DWORD
        LOCAL i : DWORD
        LOCAL j : DWORD
        LOCAL k: DWORD
        mov ecx ,n
        mov k, 0
        mov i, ecx
        mov j, 1
        mov edx,k
        laplai1:
            mov eax,i
            cmp eax,n
            jle vehang1

            vehang1: 
                mov ebx ,j
                cmp ebx, i
           
                jl vecot1
                je vexuongdong1
                jg laplai1

                vecot1:
                    print chr$("* ")
                    inc j
                    jmp vehang1
                vexuongdong1:
                    print chr$("*",13,10)
                    mov j,1
                    dec i
                    mov eax , i
                    mov edx,k
                    cmp eax, edx
                    je thoat    
                    jg laplai1
                    
                thoat:           
    ret
    vehinh2 endp
    
    vehinh3 proc n: DWORD

        LOCAL i : DWORD
        LOCAL j : DWORD

        mov i, 1
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
                    print chr$("* ")
                    inc j
                    jmp vehang
                vexuongdong:
                    print chr$("*",13,10)
                    mov j,1
                    inc i
                    jmp laplai
                thoat:             
    ret
    vehinh3 endp



start:

    mov a, sval(input("n= "))
    invoke vehinh1,a
    print chr$(13,10)
    invoke vehinh2,a
exit
end start
