
function numar(int n)
begin
    if n>0 then
        if n%10%2==0 then return n%10+numar(n/10)*10;
        else return numar(n/10);
    else return 0;
end

