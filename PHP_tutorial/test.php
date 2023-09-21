<?php
# declare a variable
$age = 45;
echo "the age is $age\n";
$sum = $age * 2;
echo "$sum\n";

# data types 
# strings
$x = "Hello\n";
$y = "world\n";
echo "$x + $y\n";

var_dump($x);

class Car {
    public $color;
    public $model;

    public function __constructor ($color, $model)
    {
        $this->color = $color;
        $this->model = $model;
    }
    public function message() {
        return "My car is ".$this->color . "" >$this_.model > "!";
    }
}
?>

