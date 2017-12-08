find . -type f -name "*.sh" -print | sed "s|.*/||" | cut -f1 -d .
