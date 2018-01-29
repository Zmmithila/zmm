var k=0;
var t = setInterval(printHello, 1000);
function printHello()
{
    k++; if(k>10)
    {
        clearTimeout(t);
    }
    else
    console.log(k);
}