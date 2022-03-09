/* string functions */
string$equal: procedure (p$str1, p$str2) boolean external;
    declare p$str1 pointer;
    declare p$str2 pointer;
end string$equal;

chr$upper: procedure (c) byte external;
    declare c byte;
end chr$upper;

/* console functions */
print$string: procedure (p$str) external;
    declare p$str pointer;
end print$string;

print$char: procedure (chr) external;
    declare chr byte;
end print$char;

new$line: procedure external;
end new$line;

print$line: procedure (p$str) external;
    declare p$str pointer;
end print$line;

print$number: procedure (n) external;
    declare n uint;
end print$number;


/* TODO: tokenizer functions */

