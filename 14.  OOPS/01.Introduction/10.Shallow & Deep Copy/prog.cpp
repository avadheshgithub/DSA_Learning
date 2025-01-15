/*

## Shallow & Deep Copy :-

    1. Shallow - it is not a proper copy

        # Ex - 
            obj 1 --------------> |----|
                                  |----|
            obj 2 = obj1

            obj 2 is also refrred to that memory (Dependent)

            so it is Shallow Copy because for the obj 2 no seprate copy is created. both just refer to the same one . so if i chaneg the values for obj1 then for the obj2 also values will be changed.

            ## Shallow Copy


    2. Deep Copy - proper copy

        # Ex -
         obj 1 ---------------> A memory & its value
         obj 2 ---------------> Seprate memry is Created and only values is copied from the obj 1

         ## SO here if i change the values for the obj 1 then the for the obj 2 values will not be changed because seprate memory is created for obj2 although values are copied form the obj 1.

         ## Deep copy







*/