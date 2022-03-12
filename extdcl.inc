/* string functions */
string_equal: procedure (p$str1, p$str2) boolean external;
    declare p$str1 pointer;
    declare p$str2 pointer;
end string_equal;

chr_upper: procedure (c) byte external;
    declare c byte;
end chr_upper;

/* console functions */
print_string: procedure (p$str) external;
    declare p$str pointer;
end print_string;

print_char: procedure (chr) external;
    declare chr byte;
end print_char;

new_line: procedure external;
end new_line;

print_line: procedure (p$str) external;
    declare p$str pointer;
end print_line;

print_hex_byte: procedure (b) external;
    declare b byte;
end print_hex_byte;

print_uint: procedure (n) external;
    declare n uint;
end print_uint;


/* tokenizer functions */
reader$set$ptr: procedure (ptr) external;
    declare ptr pointer;
end reader$set$ptr;

get$token: procedure byte external;
end get$token;

print$token: procedure external;
end print$token;

tok$next: procedure external;
end tok$next;

/* system functions */
get_command_tail: procedure (p$str) external;
    declare p$str pointer;
end get_command_tail;

terminate: procedure (code) external;
    declare code byte;
end terminate;



