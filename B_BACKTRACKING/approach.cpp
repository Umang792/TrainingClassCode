  /*1.backtracking --->parent---->Recursion

    2.large number of choice.

    3.Controlled recursion (usually condition is given)

    4.pass by reference(&).---->changes in original memory location do not need to create new like pass by value.

    
    

FUNCTION
1.if we are using pass by reference then function can be void because we do not need to return value ,answer already in memory .


RECURSION
1.BASE CONDITION(for stop recursion)
2.FUNCTION CALL ITSELF
3.BREAKs LARGER PROBLEM INTO SMALLER PROBLEMs
4.LEAF NODE PAI ANSWER

*/
/*

BACKTRACKING
1._for base case
   if(issolved()==true){
      print/save
   }
    
2._large number of choices/variable choioces(thus we need to call function manyu times)
#use LOOP to call function .
#in variable choices choices may depend on string length    or array length etc
#main function for backtracking is solve()

3._controlled /valid choices
#use condition for remove call and controlled choice.
#if(isvalid==true){
for(many times recursion call)
}


4._ pass by value/pass by reference
#pass by reference

5.main variable hoga pass by reference then usmai some changes hoga then if mai issafe check hoga then function call .
*/


/*
bool solve(problem_state &state, int level) {
    // 🧱 Base condition — check if solution is complete
    if (isSolved(state, level)) {
        print(state);  // or store it
        return true;   // or false if you want to find all
    }

    // 🔁 Try all possible options at this level
    for (option in possibleOptions(state, level)) {

        // ✅ Check if the option is safe to choose
        if (isvalid(state, level, option)) {

            // 🔹 Make a choice (change main variable)
            makeMove(state, level, option);

            // 🔹 Recursive call to next level
            bool success = solve(state, level + 1);

            // 🔙 Backtrack (undo the choice)
            undoMove(state, level, option);

            // 🔚 If you only need one solution
            if (success)
                return true;
        }
    }

    // ❌ No valid option worked
    return false;
}



*/