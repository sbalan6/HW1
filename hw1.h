static void I_have_written(){
//first function in program when header function is called
}


static int the_code[3] = {0,1,2};
//the_code initialized here 3 integer values in the array so it will be 3 * 4 bytes = 12 bytes statically locally defined
static void that_you_needed() {
//local function
static int to_compile = 1;
++to_compile;
//local variable to_compile initialized because in data and incremented by 1 after to get rid of warnings

}
