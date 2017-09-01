#include <stdlib.h>
#include "ft_door.h"

ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, str, i)
}

ft_bool close_door(t_door *door)
{
	ft_putstr(’Door closing...’);
	state = CLOSE;
	return (TRUE);
}

void is_door_open(t_door door)
{
	ft_putstr("Door is open ?");
	return (door->state = OPEN);
}

ft_bool is_door_close(t_door* door)
{
	ft_putstr("Door is close ?") ;
}

#include <stdlib.h>
#include "ft_door.h"
int main()
{
	t_door door;
	open_door(&door);
	if (is_door_close(&door))
		open_door(&door);
	if (is_door_open(&door))
		close_door(&door);
	if (door.state == OPEN)
		close_door(&door);
	return (EXIT_SUCCESS);
}
