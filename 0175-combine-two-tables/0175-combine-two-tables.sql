SELECT firstName,lastName,city,state FROM Person AS P 
LEFT JOIN 
Address AS A 
ON P.personId=A.personId;