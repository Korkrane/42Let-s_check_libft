# 42Lets_check_libft

This script will check in your libft project the following : 
* username in all the 42 headers
* makefile rules
* norm
* compilation / flags erros
* tests

## Usage

Make sure to use ```make all``` and ```make bonus``` with your Makefile before using it.

* Clone this rep in your libft folder
* Go to 42Lets_check_libft direcotry
* Run ```./grademe```

If the script display errors in the test parts, you can compare the results of tests in the ```output/expected``` and ```output/user``` directories. For each function, 10 tests are made. Each line in the output files is equivalent to a test.

In the case where you are using this script not from guacamole or 42 Campus, the script assume that the norminette path is ```~/.norminette/norminette.rb```. If you have saved it somewhere else, please update the path in the script ```grademe``` (line 51).

## Options available

* ```-p1``` will run part1 only
* ```-p2``` will run part2 only
* ```-b``` will run bonus only
