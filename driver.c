#include "linux/module.h"
#include "linux/init.h"
static int  dirver_init(void) {
  /* code */
  return 0;
}
static void driver_exit(void){
  return;
}
module_init(dirver_init);
module_exit(driver_exit);
