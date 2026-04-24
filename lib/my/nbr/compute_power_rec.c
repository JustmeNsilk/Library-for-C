/*
** EPITECH PROJECT, 2025
** my_compute_power_rec
** File description:
** return the power p to the number nb with recursivity
*/

int my_compute_power_rec(int nb, int const p)
{
    if (p == 0 || nb == 1)
        return 1;
    if (p == 1)
        return nb;
    nb = nb * my_compute_power_rec(nb, p - 1);
    return nb;
}
