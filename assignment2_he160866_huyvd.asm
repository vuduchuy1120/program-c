include\masm32\include\masm32rt.inc

.data
y dd 0
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
    tohop proc a:DWORD ,b:DWORD
        LOCAL ketqua1 :DWORD
        LOCAl m:DWORD
        LOCAL hieu:DWORD
        LOCAL check:DWORD
        mov ketqua1,1
        mov m, 0
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
            
            mov ebx,m
            cmp ebx,b
            jl tinh
            jge inra
            tinh:
                mov ecx,a
                sub ecx,m
                mov hieu,ecx
                mov eax, ketqua1
                mul hieu
                mov ketqua1,eax ; dung den day roi check tiep
                inc m
                mov eax,ketqua1
                div m
                mov ketqua1,eax    
                jmp vonglap
             inra:
                cmp eax,10
                jl incach1
                jge incach2
             incach1:
                 print chr$("  ")
                 print str$(ketqua1)
                 jmp thoat
             incach2:
                 print chr$(" ")
                 print str$(ketqua1)
                 
                    
             thoat:
    
    ret
    tohop endp


    print_pascal proc n: DWORD
        LOCAL i : DWORD
        LOCAL j : DWORD
        mov i, 0
        mov j, 0
        laplai:
            mov eax,i
            cmp eax,n
            je vehang
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
                    mov j,0
                    inc i
                    jmp laplai
                thoat:             
    ret
    print_pascal endp


start:
    mov y, sval(input("n= "))
    invoke print_fibonacci,y
    print chr$(13,10)
    mov y, sval(input("n= "))
    dec y
    invoke print_pascal,y
    
    
exit
end start
