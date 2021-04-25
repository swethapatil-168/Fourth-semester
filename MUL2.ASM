.model small
.data
num1 dw 34
num2 dw 25
res dd ?

.code
mov ax,@data
mov ds,ax

mov ax,num1
mul num2
mov [res+0],ax
mov [res+2],dx

mov ah,4ch
int 21h
end

