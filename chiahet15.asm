include \masm32\include\masm32rt.inc

.data
    x dd 0

.code

chiahet15 proc a:DWORD
    mov edx, 0
    mov eax, a
    mov ebx, 15
    div ebx

    cmp edx, 0
    je chiahet ;jump equal
    jne khongchiahet  ;jump not equal

    chiahet:
        print chr$("Chia het cho 15", 13, 10)
        jmp thoat
    khongchiahet:
        mov edx ,0
        mov eax ,a
        mov ebx ,3
        div ebx
        cmp edx,0
        je chiahetcho3
        jne chiahetcho5 

        chiahetcho3:
            print chr$("Chia het cho 3",13,10)
            jmp thoat

        chiahetcho5:
            mov edx ,0
            mov eax ,a
            mov ebx ,5
            div ebx
            cmp edx,0
            je inchiahet
            jne inkhongchiahetcho5

        inchiahet:
            print chr$("chia het cho 5",13,10)
            jmp thoat
        inkhongchiahetcho5:
            print chr$(" Khong Chia het cho 5 va 3",13,10)
    

        thoat:
    ret
    chiahet15 endp

start:
    mov x, sval(input("x = "))
    invoke chiahet15, x

exit
end start