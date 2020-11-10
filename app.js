var a = 2;
var b = 15;

var r = (a + b) / 2;

if (Math.abs(a - r) == Math.abs(b - r)) {
  console.log(r);
  console.log(Math.abs(a - r) == Math.abs(b - r));
}
