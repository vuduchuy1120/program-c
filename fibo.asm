include\masm32\include\masm32rt.inc

.data
a dd 0
.code

    print_fibonacci proc n: DWORD
        
        LOCAL i : DWORD
        LOCAL f1: DWORD
        LOCAL f2 : DWORD
        LOCAL fibo: DWORD
        mov i,3
        mov f1, 1
        mov f2, 1
                  
                mov eax,n
                cmp eax, 2
                jl inra1
                je inra111
                jg thuchientiep
            
                inra1:
                    cmp eax, 1
                    jl thoat
                    jge inra11
                    
                    inra11:
                        print chr$("1 ")
                        jmp thoat
                 inra111:
                    print chr$("1 1 ")
                        jmp thoat
                thuchientiep:
                    print chr$("1 1 ")
                    
                thuchientiep1:
                    mov eax, i
                    cmp eax, n
                    jle laplai
                    jg thoat

                    laplai:
                        mov eax,f1
                        add eax,f2
                        mov fibo,eax
                        mov ebx,f2
                        mov f2,eax
                        mov f1,ebx
                        print str$(fibo)
                        print chr$(" ")
                        inc i
                        jmp thuchientiep1
                        
                        thoat :             
       ret
    print_fibonacci endp

   start:

    mov a, sval(input("n= "))
    invoke print_fibonacci,a
exit
end start