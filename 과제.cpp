int main(int argc, char **argv)
{
  int infile. outfile;
  char out_file_name[4] = "xaa" ;
  int file_count. line_count;
  char c;

  infile = open("infile", O_RDONLY);

  line_count = 0;

  file_count = 0;
  out_file_name[1] = 'a' + (file_count/26);
  out_file_name[2] = 'a' + (file_count%26);
  printf("out file name[%2d] = %s [%2d][%2d]\n", file_count, out_file_name, file_count/26, file_count%26);
  outfile = open(out_file_name, O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);

  while (read(infile, &c, 1) ==1){
    if(line_count == 10){
      line_count = 0;

      close(outfile);

      file_count++;
      out_file_name[1] = 'a' + (file_count/26);
      out_file_name[2] = 'a' + (file count%26);
      printf("out file name[%2d] = %s [%2d][%2d]\n", file_count, out_file_name, file_count/26, file_count%26);
      outfile = open(out_file_name, O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
    }

    write(outfile,&c,1);
    if(c=='\n') line_count++
  }

  close(outfile);
  close(int)

}