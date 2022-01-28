include\masm32\include\masm32rt.inc

.data
y dd 0

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
                print chr$("TONG CAC SO CHAN TU 0 DEN ")
                print str$(n)
                print chr$(" LA : = ")
                print str$(sum)
                print chr$(13,10)
    ret    

    TinhTong endp

    checknam proc n: DWORD
    
        mov edx,0
        mov eax,n
        mov ebx,400
        div ebx
        cmp edx,0
        je inrayes
        jne chiahetcho4

    chiahetcho4:
        mov edx,0
        mov eax,n
        mov ebx,4
        div ebx
        cmp edx, 0
        je checkchiahet100
        jne inrano
     inrano:
        print chr$(" NAM ")
        print str$(n)
        print chr$(" ")
        print chr$("KHONG LA NAM NHUAN",13,10)
        jmp thoat
     checkchiahet100:
        mov edx,0
        mov eax,n
        mov ebx,100
        div ebx
        cmp edx, 0
        je inrano
        jne inrayes
     inrayes:
        print chr$(" NAM ")
        print str$(n)
        print chr$(" ")
        print chr$("LA NAM NHUAN",13,10)
    thoat:
 ret

checknam endp

start:
   mov y, sval(input("n=  "))
    invoke TinhTong,y
    invoke checknam, y
exit
end start
