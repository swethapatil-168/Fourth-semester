.model small
.data
num1 db 1
num2 db 2
res db ?

.code
mov ax,@data
mov ds,ax

mov al,num1
add al,num2
mov res,al

mov ah,4ch
int 21h
end
