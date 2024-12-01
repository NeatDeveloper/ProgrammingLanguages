#!/usr/bin/env bun

import { exec } from 'child_process';
import { fileURLToPath } from 'url';
import { dirname } from 'path';

const fileName = Bun.argv[2] || 'main';

if(!fileName) {
    console.error('Укажите название файла cpp в папке src');
    process.exit();
}

try {
    await Bun.$`g++ ./src/modules/${fileName}.cpp -o ./build/${fileName.split('/').join(':')} && ./build/${fileName.split('/').join(':')}`;
    // console.log(result.stdout);
} catch {}
