.model small
.data
a dw 123
b dw 23
res dw ?

.code
mov ax,@data
mov ds,ax

mov ax,a
sub ax,b
mov res,ax

mov ah,4ch
int 21h
end
