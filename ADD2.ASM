.model small
.data
num1 dw 1
num2 dw 2
res dw ?

.code
mov ax,@data
mov ds,ax

mov ax,num1
add ax,num2
mov res,ax

mov ah,4ch
int 21h
end
